## Code Structure
```
.
├── Server                                 <--- Engine's First Level Path 
│   ├── Setup.bat                          <--- Builds Sharmpake and HeaderParser and Install Dependencies
│   └── Engine                             <--- Engine's Second Level Path 
│      ├── GenerateSolution.bat            <--- Makes Solution File using Sharpmake 
│      ├── Templates                       <--- Stores Templates for UObject and Project
│      	├── CodeTemplates                  <--- Templates for UObject
│      	└── ProjectTemplates               <--- Templates for Project 
│      └── Engine                          <--- Engine's Third Level Path 
│      	├── Config                         <--- Includes ini files such as BaseEngine.ini
│      	└── Source                         <--- Includes Source Codes of the Engine 
│     		├── Console                    <--- Source Codes for Console Application
│          	├── Programs                   <--- Source Codes for Sharpmake and HeaderParser
│          	├── ThirdParty/IniParser       <--- Source Codes for IniParser 
│          	└── Runtime                    <--- Manages various modules required during engine runtime. 
│          	      ├── Core                 <--- Includes Core Systems 
│          	      ├── Engine               <--- Manages Game Logic 
│          	      ├── Launch               <--- Initializes Runtime Environment
│          	      ├── Network              <--- Provides Network Functionality 
│          	      ├── GUI                  <--- [Uploaded] Map Tool 
│          	      └── Render               <--- [Uploaded] DirectX API 
└── Setup.bat                              

```