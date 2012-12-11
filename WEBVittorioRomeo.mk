##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=WEBVittorioRomeo
ConfigurationName      :=Release
WorkspacePath          := "D:\Vee\Software\GitHub\OHWorkspace"
ProjectPath            := "D:\Vee\Software\GitHub\OHWorkspace\WEBVittorioRomeo"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Vittorio
Date                   :=12/11/12
CodeLitePath           :="c:\Program Files (x86)\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="D:\Vee\Software\GitHub\OHWorkspace\WEBVittorioRomeo\WEBVittorioRomeo.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)D:/WIP/ctemplate/ctemplate-read-only/src $(IncludeSwitch)D:/Vee/Software/WIP/jsoncpp/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)ctemplate-2 $(LibrarySwitch)json_mingw_libmt 
ArLibs                 :=  "libctemplate-2.dll" "libjson_mingw_libmt.a" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)D:/WIP/ctemplate/ctemplate-read-only/.libs $(LibraryPathSwitch)D:/Vee/Software/WIP/jsoncpp/libs/mingw 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -O3 -Wall -std=c++11 $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=c:\Program Files (x86)\CodeLite
WXWIN:=C:\wxWidgets
UNIT_TEST_PP_SRC_DIR:=C:\UnitTest++-1.3
WXCFG:=gcc_dll\mswu
Objects=$(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/Utils$(ObjectSuffix) $(IntermediateDirectory)/Content$(ObjectSuffix) $(IntermediateDirectory)/ContentEntry$(ObjectSuffix) $(IntermediateDirectory)/Page$(ObjectSuffix) $(IntermediateDirectory)/Header$(ObjectSuffix) $(IntermediateDirectory)/Menu$(ObjectSuffix) $(IntermediateDirectory)/Global$(ObjectSuffix) $(IntermediateDirectory)/MenuItem$(ObjectSuffix) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects) > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/main.cpp"

$(IntermediateDirectory)/Utils$(ObjectSuffix): Utils.cpp $(IntermediateDirectory)/Utils$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Utils.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Utils$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Utils$(DependSuffix): Utils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Utils$(ObjectSuffix) -MF$(IntermediateDirectory)/Utils$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Utils.cpp"

$(IntermediateDirectory)/Utils$(PreprocessSuffix): Utils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Utils$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Utils.cpp"

$(IntermediateDirectory)/Content$(ObjectSuffix): Content.cpp $(IntermediateDirectory)/Content$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Content.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Content$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Content$(DependSuffix): Content.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Content$(ObjectSuffix) -MF$(IntermediateDirectory)/Content$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Content.cpp"

$(IntermediateDirectory)/Content$(PreprocessSuffix): Content.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Content$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Content.cpp"

$(IntermediateDirectory)/ContentEntry$(ObjectSuffix): ContentEntry.cpp $(IntermediateDirectory)/ContentEntry$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/ContentEntry.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ContentEntry$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ContentEntry$(DependSuffix): ContentEntry.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ContentEntry$(ObjectSuffix) -MF$(IntermediateDirectory)/ContentEntry$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/ContentEntry.cpp"

$(IntermediateDirectory)/ContentEntry$(PreprocessSuffix): ContentEntry.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ContentEntry$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/ContentEntry.cpp"

$(IntermediateDirectory)/Page$(ObjectSuffix): Page.cpp $(IntermediateDirectory)/Page$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Page.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Page$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Page$(DependSuffix): Page.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Page$(ObjectSuffix) -MF$(IntermediateDirectory)/Page$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Page.cpp"

$(IntermediateDirectory)/Page$(PreprocessSuffix): Page.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Page$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Page.cpp"

$(IntermediateDirectory)/Header$(ObjectSuffix): Header.cpp $(IntermediateDirectory)/Header$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Header.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Header$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Header$(DependSuffix): Header.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Header$(ObjectSuffix) -MF$(IntermediateDirectory)/Header$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Header.cpp"

$(IntermediateDirectory)/Header$(PreprocessSuffix): Header.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Header$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Header.cpp"

$(IntermediateDirectory)/Menu$(ObjectSuffix): Menu.cpp $(IntermediateDirectory)/Menu$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Menu$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Menu$(DependSuffix): Menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Menu$(ObjectSuffix) -MF$(IntermediateDirectory)/Menu$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Menu.cpp"

$(IntermediateDirectory)/Menu$(PreprocessSuffix): Menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Menu$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Menu.cpp"

$(IntermediateDirectory)/Global$(ObjectSuffix): Global.cpp $(IntermediateDirectory)/Global$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Global.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Global$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Global$(DependSuffix): Global.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Global$(ObjectSuffix) -MF$(IntermediateDirectory)/Global$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Global.cpp"

$(IntermediateDirectory)/Global$(PreprocessSuffix): Global.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Global$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/Global.cpp"

$(IntermediateDirectory)/MenuItem$(ObjectSuffix): MenuItem.cpp $(IntermediateDirectory)/MenuItem$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/MenuItem.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MenuItem$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MenuItem$(DependSuffix): MenuItem.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MenuItem$(ObjectSuffix) -MF$(IntermediateDirectory)/MenuItem$(DependSuffix) -MM "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/MenuItem.cpp"

$(IntermediateDirectory)/MenuItem$(PreprocessSuffix): MenuItem.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MenuItem$(PreprocessSuffix) "D:/Vee/Software/GitHub/OHWorkspace/WEBVittorioRomeo/MenuItem.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/Utils$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/Utils$(DependSuffix)
	$(RM) $(IntermediateDirectory)/Utils$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/Content$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/Content$(DependSuffix)
	$(RM) $(IntermediateDirectory)/Content$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/ContentEntry$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/ContentEntry$(DependSuffix)
	$(RM) $(IntermediateDirectory)/ContentEntry$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/Page$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/Page$(DependSuffix)
	$(RM) $(IntermediateDirectory)/Page$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/Header$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/Header$(DependSuffix)
	$(RM) $(IntermediateDirectory)/Header$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/Menu$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/Menu$(DependSuffix)
	$(RM) $(IntermediateDirectory)/Menu$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/Global$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/Global$(DependSuffix)
	$(RM) $(IntermediateDirectory)/Global$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/MenuItem$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/MenuItem$(DependSuffix)
	$(RM) $(IntermediateDirectory)/MenuItem$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "D:\Vee\Software\GitHub\OHWorkspace\.build-release\WEBVittorioRomeo"


