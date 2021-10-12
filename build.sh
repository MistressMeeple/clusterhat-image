#!/bin/bash
git commit -a -m init
rm -r /mnt/win/cluster-artifacts/*
gbp buildpackage --git-ignore-new --git-export-dir=../cluster-artifacts --git-debian-branch=master --git-upstream-branch=master --git-upstream-tree=master 
git clean -dfx
cp ../cluster-artifacts/clusterctrl_1.0-1.0_arm64.deb /mnt/win/MNT/home/pi

