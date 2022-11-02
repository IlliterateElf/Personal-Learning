from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def index(request):
    context = {
        'name': 'John',
        'age': '23',
        'nationality': 'British',
    }
    return render(request, 'index.html', context)

def counter(request):
    words = request.POST['words']
    amount_of_words = len(words.split())
    return render(request, 'counter.html', {'amount': amount_of_words})
