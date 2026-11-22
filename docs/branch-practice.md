# 分支练习记录

这个仓库用来练 Git 分支，记录一下实际用过的流程。

## 流程

```bash
# 1. 从 main 拉一个功能分支
git switch -c feature-2

# 2. 在分支上改东西并提交
git add -A
git commit -m "docs: ..."
git push -u origin feature-2

# 3. 回到 main，合并（--no-ff 保留合并节点）
git switch main
git merge --no-ff feature-2

# 4. 推送
git push origin main
```

## 分支约定

- `main`：主干，始终可编译、可推送
- `feature*`：临时实验分支，合完即可删

## 删分支

```bash
git push origin --delete feature-2   # 删远端
git branch -d feature-2              # 删本地
```

已合并的分支删除不会丢代码，因为提交已经包含在 `main` 里。
