// VulnerableLoadLibraryApp.cpp
// Este ejecutable de ejemplo cargará dos DLLs (testing.dll & rtm.dll) usando la función LoadLibrary()
// Desarrollado por Gerh de Spartan-Cybersecurity 

#include <Windows.h>   // Biblioteca principal para funciones de Windows
#include <tchar.h>     // Biblioteca para compatibilidad de texto

int main()
{
    //  Intenta cargar la primera DLL: testing.dll
    HINSTANCE hGetProcIDDLL1 = LoadLibrary(TEXT("testing.dll"));

    // Verifica si la DLL fue cargada correctamente
    if (hGetProcIDDLL1 == NULL) {
        //  Muestra un mensaje si hay un problema al cargar testing.dll
        MessageBox(NULL, _T("Hubo un problema al cargar testing.dll"), _T("Mensaje"), MB_OK | MB_SYSTEMMODAL);
    }
    else {
        //  Muestra un mensaje si la DLL se cargó exitosamente
        MessageBox(NULL, _T("DLL cargada exitosamente"), _T("Mensaje"), MB_OK | MB_SYSTEMMODAL);
    }

    //  Intenta cargar la segunda DLL: rtm.dll
    HINSTANCE hGetProcIDDLL2 = LoadLibrary(TEXT("rtm.dll"));

    // Verifica si la segunda DLL fue cargada correctamente
    if (hGetProcIDDLL2 == NULL) {
        //  Muestra un mensaje si hay un problema al cargar rtm.dll
        MessageBox(NULL, _T("Hubo un problema al cargar rtm.dll"), _T("Mensaje"), MB_OK | MB_SYSTEMMODAL);
    }
    else {
        //  Muestra un mensaje si la DLL se cargó exitosamente
        MessageBox(NULL, _T("DLL cargada exitosamente"), _T("Mensaje"), MB_OK | MB_SYSTEMMODAL);
    }

    //  Mensaje final para detener la salida de la aplicación
    MessageBox(NULL, _T("Solo un mensaje para pausar la salida de la aplicación!"), _T("Mensaje"), MB_OK | MB_SYSTEMMODAL);

    return 0;
}
