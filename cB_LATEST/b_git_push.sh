cd ./source/Ara
./b_git_push.sh

cd ../common
./b_git_push.sh

cd ../ProjectCfg
./b_git_push.sh

cd ../ProjectCompiler
./b_git_push.sh

cd ../ReSimVehicle
./b_git_push.sh

cd ../SwcApplDcm
./b_git_push.sh

cd ../SwcApplDem
./b_git_push.sh

cd ../SwcApplNvM
./b_git_push.sh

cd ../SwcApplTpms
./b_git_push.sh

cd ../SwcServiceDcm
./b_git_push.sh

cd ../SwcServiceDem
./b_git_push.sh

cd ../SwcServiceNvM
./b_git_push.sh

cd ../..
git add .
git status
git commit -m "AUTOSAR - Hotfixes - pIntegrationRdcXnf_cB_LATEST"
git push
