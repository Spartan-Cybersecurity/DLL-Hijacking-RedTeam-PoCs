# Vulnerabilidad de DLL Hijacking en Notepad++

Notepad++ en sus versiones 8.5.4 y anteriores presenta una vulnerabilidad conocida como **DLL hijacking**, que permite a un atacante ejecutar código arbitrario aprovechándose de cómo la aplicación carga sus dependencias de DLLs. En este caso, Notepad++ intenta cargar la biblioteca `MSASN1.dll` desde su directorio de instalación (`C:\Program Files\Notepad++\MSASN1.dll`), antes de buscarla en ubicaciones de sistema seguras.

## Descripción de la Explotación

Para explotar esta vulnerabilidad, el atacante debe crear una DLL maliciosa con el nombre exacto `MSASN1.dll`. Luego, al colocarla en el mismo directorio donde se encuentra `notepad++.exe` (generalmente en `C:\Program Files\Notepad++`), logrará que la aplicación cargue su DLL manipulada en lugar de la original. Esto permite obtener una ejecución remota de comandos (RCE) en el sistema, ya que Notepad++ cargará y ejecutará el código dentro de la DLL maliciosa.

### Pasos para la Explotación:

1. **Crear la DLL maliciosa**: Se debe generar una DLL con el nombre `MSASN1.dll` que contenga el código que se desea ejecutar en el sistema víctima.

2. **Colocar la DLL en el directorio de Notepad++**: La DLL debe ser copiada al directorio de instalación de Notepad++ (`C:\Program Files\Notepad++\MSASN1.dll`), de modo que la aplicación la cargue al iniciar.

3. **Ejecutar Notepad++**: Al abrir Notepad++, este cargará automáticamente la DLL colocada en su directorio, ejecutando el código malicioso y logrando así una ejecución de código arbitrario en el sistema.

Este proceso permite obtener control sobre el sistema aprovechando una vulnerabilidad en la forma en que Notepad++ gestiona las rutas de sus DLLs, evitando en muchos casos la detección al no generar indicadores de compromiso visibles.

## Referencia

Para más detalles, consulta el [issue reportado en GitHub](https://github.com/notepad-plus-plus/notepad-plus-plus/issues/13964) donde se describe esta vulnerabilidad.
