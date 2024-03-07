# FolderCrypt

##  Introduction
FolderCrypt is a folder encryption SDK for software developer. It is based on the transparent file encryption technology implemented by a minifilter driver. Actually, the driver of FolderCrypt_Mini is a variant version of the minifilter of ETEFS_Mini. The focus of ETEFS_Mini is to encrypt the file generated by selected application, but FolderCrypt is focus on the encryption of the target directory which sensitive file located in. All file created in the target directory will be encrypted in real time. The encrypted files located in the target directory will be auto decrypted while file are being access. FolderCrypt also implement the access control feature. You can set access privilege for a process, user name or group name. So, FolderCrypt supports set filter like "user", "process" to permit access to an encrypted resource. With the help of FolderCrypt, software developers can rapidly build various document security products from scratch, like digital vault application, document right management system and document operation auditing system, etc. 

# Product Benefits
## Easy to use
The API set of FolderCrypt is comprised of several functions programming in “C” language exported by a DLL library. By using these functions, it’s very easy to build a basic transparent file encryption system. These API functions can also be called from other programming language, like “C#” and “VB”.  
## Cut down the development cycle
Developing a driver is difficult. Developing a file system driver is even more difficult. If you want to create an engine from scratch, this may take a long development cycle and cause the loss of marketing.

# Product Features 
## Implementing in kernel mode
The core module of FolderCrypt is implemented in kernel mode. The minfilter framework is highly recommended by Microsoft. It is very convenient to intercept the file I/O requests and insert encryption module on file system stack. 

## File access control
FolderCrypt_Mini supports set filter like "user", "process" to permit access to an encrypted resource.

## Event Monitor
FolderCrypt supports to capture the critical operation on the target files, such as access, delete, modify etc. The event fields contains user name, process name, user logon domain name, user logon server name. 

## Application support
FolderCrypt supports any type of files, such as EXE, DLL, SYS files.

# Main UI
<img src="https://etefs.com/foldercrypt.png">    

# Connect
For more information, please visit    
http://www.etefs.com    
For business cooperation or more product detail ,please contact    
**etefs@etefs.com**    
