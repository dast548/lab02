# Лабораторная работа №2

**Студент:** dast548  
**Дата выполнения:** 26.04.2026  
**GitHub:** https://github.com/dast548/lab02

---

## Теоретическая часть

### Основные понятия Git

- **commit** — сохранение изменений с описанием
- **branch** — независимая линия разработки
- **merge** — объединение изменений из одной ветки в другую
- **pull-request** — предложение изменений для включения в основную ветку
- **rebase** — перенос коммитов на другую ветку
- **merge conflict** — конфликт при объединении изменений

### Основные команды

| Команда | Назначение |
|---------|------------|
| `git init` | Создать репозиторий |
| `git add` | Добавить изменения |
| `git commit -m` | Сохранить коммит |
| `git push` | Отправить на GitHub |
| `git pull` | Забрать изменения |
| `git checkout -b` | Создать ветку |
| `git merge` | Слить ветки |
| `git rebase` | Перебазировать |
| `git branch -d` | Удалить ветку |

---

## Практическая часть

### Часть 1

**1. Создание репозитория**

```bash
cd ~/projects/lab02
git init
echo "# lab02" > README.md
git add README.md
git commit -m "added README.md"
git remote add origin https://github.com/dast548/lab02.git
git push -u origin master
