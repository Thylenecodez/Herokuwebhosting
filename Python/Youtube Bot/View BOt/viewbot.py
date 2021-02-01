from selenium import webdriver
from time import sleep

driver1 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe") 
driver2 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe")
driver3 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe")
driver4 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe")
driver5 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe")
driver6 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe")
driver7 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe")
driver8 = webdriver.Chrome(executable_path="D:\VS code\Python\Youtube Bot\View BOt\chromedriver.exe")

driver1.get("https://youtu.be/aOv4EWJ778I")
driver2.get("https://youtu.be/aOv4EWJ778I")
driver3.get("https://youtu.be/aOv4EWJ778I")
driver4.get("https://youtu.be/aOv4EWJ778I")
driver5.get("https://youtu.be/aOv4EWJ778I")
driver6.get("https://youtu.be/aOv4EWJ778I")
driver7.get("https://youtu.be/aOv4EWJ778I")
driver8.get("https://youtu.be/aOv4EWJ778I")

while True:
    sleep(60)
    driver1.refresh()
    driver2.refresh()
    driver3.refresh()
    driver4.refresh()
    driver5.refresh()
    driver6.refresh()
    driver7.refresh()
    driver8.refresh()