function fun()
{


var userv=document.forms[1].first.value;

var userreg=new RegExp("^[a-zA-Z][a-zA-Z0-9]*$");

var ruser=userreg.exec(userv);
var remail=emailreg.exec(emailv);
var rph=phreg.exec(phv);
if(!ruser) { alert("username invalid");document.forms[1].user.focus();}
}
