cd ./source/SwcApplTpms
./b_git_push.sh

cd ../Wrapper_HBG
./b_git_push.sh

cd ../..
git add .
git status
git commit -m "AUTOSAR Migration Activities - vEcu_vVcBsBpTpms_CLAR_LCI_FullProjectWithRteStub_LATEST"
git push
