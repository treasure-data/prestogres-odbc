Param(
[string]$configPath
)
$scriptPath = (Split-Path $MyInvocation.MyCommand.Path)
$configInfo = & "$scriptPath\..\winbuild\configuration.ps1" "$configPath"
$VERSION = $configInfo.Configuration.version

$packageName = "prestogres-odbc-$VERSION"

Remove-Item "$packageName" -Recurse
New-Item "$packageName" -itemType Directory
Copy-Item "prestogres-odbc.msi" "$packageName\prestogres-odbc.msi"
Copy-Item "prestogres-odbc_x64.msi" "$packageName\prestogres-odbc_x64.msi"
Copy-Item "..\readme.txt" "$packageName\README.txt"

Write-Zip -Path "$packageName" -OutputPath "${packageName}.zip" -IncludeEmptyDirectories

