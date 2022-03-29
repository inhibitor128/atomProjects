import PyPDF2
import os

with open('phoneBook.pdf', 'rb') as pdfFile:
    pdfReader = PyPDF2.PdfFileReader(pdfFile)
    print(pdfReader.numPages)

    pageObj = pdfReader.getPage(10)
    page = pageObj.extractText()
print(page)
