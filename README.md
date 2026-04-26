# Домашнее задание 2.0

Выполнение лабораторной работы, посвященной изучению систем контроля версий на примере Git.

## Теоретическая часть

- ▶ Нажмите, чтобы раскрыть

## Практическая часть

<details>
<summary>▶ Нажмите, чтобы раскрыть</summary>

### Часть 1

<details>
<summary>▶ Нажмите, чтобы раскрыть</summary>

**Пункты 1 и 2.** Выполним в соответствии с командами, указанными в Tutorial и создадим пустой репозиторий, в котором будет происходить дальнейшая работа.

**Реализация + bash:**

```bash
$ cd ~/projects/lab02
$ git init
hint: Using 'master' as the name for the initial branch...
Initialized empty Git repository in /home/ubuntu/projects/lab02/.git/

$ echo "# lab02" > README.md
$ git add README.md
$ git commit -m "added README.md"
[master (root-commit) 1dec30a] added README.md
 1 file changed, 1 insertion(+)
 create mode 100644 README.md

$ git remote add origin https://github.com/dast548/lab02.git
$ git push -u origin master
Enumerating objects: 3, done.
To https://github.com/dast548/lab02.git
 * [new branch]      master -> master
