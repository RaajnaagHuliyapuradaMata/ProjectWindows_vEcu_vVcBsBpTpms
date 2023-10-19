cd ./source/common
./b_git_push.sh

cd ../Ara
./b_git_push.sh

cd ../ProjectCfg
./b_git_push.sh

cd ../ProjectCompiler
./b_git_push.sh

cd ../SwcApplTpms
./b_git_push.sh

cd ../..
git add .
git status
git commit -m "AUTOSAR - Hotfixes - cB_LATEST"
git push
