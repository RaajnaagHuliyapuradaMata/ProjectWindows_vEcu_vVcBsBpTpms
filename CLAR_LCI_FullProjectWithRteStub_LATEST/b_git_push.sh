cd ./source/SwcApplTpms
./b_git_push.sh

cd ./source/Wrapper_HBG
./b_git_push.sh

cd ../..
git add .
git status
git commit -m "AUTOSAR Migration Activities - EcuResim_vVcBsBpTpms_CLAR_LCI_FullProjectWithRteStub_LATEST"
git push
