<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib uri='http://java.sun.com/jsp/jstl/core' prefix='c'%>

    
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
	<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossorigin="anonymous">
	<link rel="stylesheet" href="${pageContext.request.contextPath}/css/custom_style.css">
	<meta name="viewport" content="width=device-width, initial-scale=1.0, shrink-to-fit=no">
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
	<title>Mbpereira</title>
</head>
<body>
	<div class="content container-fluid d-flex flex-column">
		<div class="header">
			<nav class="navbar navbar-expand-md navbar-light bg-white p-3">
				<a class="navbar-brand" href="#">Mbpereira</a>
				<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#mainNavbar" aria-controls="mainNavbar" aria-expanded="false">
					<span class="navbar-toggler-icon"></span>
				</button>
				<div class="collapse navbar-collapse justify-content-md-end" id="mainNavbar">
					<ul class="navbar-nav text-center">
						<li class="nav-item">
							<a class="nav-link" href="${pageContext.request.contextPath}/index.jsp">Home</a>
						</li>
						<li class="nav-item dropdown">
							<a class="nav-link dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false" href="#">Curriculo</a>
							<div class="dropdown-menu">
								<a class="dropdown-item" href="#">Ver tudo</a>
								<div class="dropdown-divider"></div>
								<a class="dropdown-item" href="#">Personalidade</a>
								<a class="dropdown-item" href="#">Habilidades</a>
								<a class="dropdown-item" href="#">Interesses</a>
								<a class="dropdown-item" href="#">Bibliografa</a>
							</div>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="#">Templates</a>
						</li>
					</ul>
				</div>
			</nav>
		</div>
		
		<div class="main">
			<div class="row">
				<div class="col-md-4">
					<nav id="scrollspy" class="navbar navbar-dark bg-light flex-column">
						<a class="navbar-brand" href="#">Icone</a>
						<nav class="nav nav-pills flex-column">
							<a class="nav-link" href="#item-1">Personalidade</a>
							<a class="nav-link" href="#item-2">Habilidades</a>
							<nav class="nav nav-pills flex-column">
								<a class="nav-link" href="#item-2-1">Frontend</a>
								<a class="nav-link" href="#item-2-2">Backend</a>
								<a class="nav-link" href="#item-2-3">Frameworks</a>
							</nav>
							<a class="nav-link" href="#item-3">Interesses</a>
							<nav class="nav nav-pills flex-column">
								<a class="nav-link" href="#item-3-1">Desenvolvimento</a>
								<a class="nav-link" href="#item-3-2">Redes</a>
							</nav>	
						</nav>
					</nav>
				</div>
				<div class="col-md-7">
					<div data-spy="scroll" data-target="#scrollspy" data-offset="0" class="car row justify-content-center my-5">
						<div class="col-md-12 my-5">
							<h1 class="font-anton font-4 text-center">Personalidade</h1>
						</div>
						<div class="col-md-3 bg-light card m-2">
							<img class="card-img-top" src="">
							<div class="card-body">
								<h5 class="card-title">XXX</h5>
								<p class="card-text">Some text here</p>
							</div>
						</div>
						<div class="col-md-3 bg-primary card m-2 text-white detached">
							<img class="card-img-top" src="">
							<div class="card-body">
								<h5 class="card-title">YYY</h5>
								<p class="card-text">Some text here</p>
							</div>
						</div>
						<div class="col-md-3 bg-light card m-2">
							<img class="card-img-top" src="">
							<div class="card-body">
								<h5 class="card-title">ZZZ</h5>
								<p class="card-text">Some text here</p>
							</div>
						</div>
					</div>
					<div class="row my-5 justify-content-center">
						<div class="col-md-12">
							<h1 class="font-anton font-4 text-dark text-center">Skills</h1>
						</div>
						<div class="col-md-4 text-center my-5">
							<span class="font-3 text-warning font-oswald">{ Frontend }</span>
						</div>
						<div class="w-100"></div>
						<div class="col-md-2 card bg-dark text-white m-2">
							<img class="mx-auto my-3" height="64" width="64" src="${pageContext.request.contextPath}/img/icons/html.png">
							<div class="card-body">
								<h4 class="text-center card-title">Html</h4>
								<p class="card-text text-center">Some text here</p>
								<div class="rating-group d-flex justify-content-center align-items-center">
									<c:forEach var="i" begin="1" end="5">
										<img class="rating" src="${pageContext.request.contextPath}/img/util/star0.png" width="16" height="16">
									</c:forEach>
								</div>
							</div>
						</div>
						<div class="col-md-2 card bg-light text-dark m-2">
							<img class="mx-auto my-3" height="64" width="64" src="${pageContext.request.contextPath}/img/icons/css.png">
							<div class="card-body">
								<h4 class="text-center card-title">Css</h4>
								<p class="card-text text-center">Some text here</p>
								<div class="rating-group d-flex justify-content-center align-items-center">
									<c:forEach var="i" begin="1" end="5">
										<img class="rating" src="${pageContext.request.contextPath}/img/util/star0.png" width="16" height="16">
									</c:forEach>
								</div>
							</div>
						</div>
						<div class="col-md-2 card bg-dark text-white m-2">
							<img class="mx-auto my-3" height="64" width="64" src="${pageContext.request.contextPath}/img/icons/js.png">
							<div class="card-body">
								<h4 class="text-center card-title">Javascript</h4>
								<p class="card-text text-center">Some text here</p>
								<div class="rating-group d-flex justify-content-center align-items-center">
									<c:forEach var="i" begin="1" end="5">
										<img class="rating" src="${pageContext.request.contextPath}/img/util/star0.png" width="16" height="16">
									</c:forEach>
								</div>
							</div>
						</div>
						<div class="w-100"></div>
						<div class="col-md-8 text-center my-5">
							<span class="font-3 text-warning font-oswald">&lt;? Backend %&gt;</span>
						</div>
						<div class="w-100"></div>
						<div class="col-md-5 card bg-dark text-light m-2">
							<img class="mx-auto my-3" height="64" width="64" src="${pageContext.request.contextPath}/img/icons/php.png">
							<div class="card-body">
								<h4 class="text-center card-title">PHP</h4>
								<p class="card-text text-center">
								Uma liguagem leve, flexível, extremamente usada. Importante peça para dar 
						dinâmicidade aos sites. É executada do lado do servidor, onde processa 
						dados e devolve baseando-se em n parâmetros
						e funções.
						</p>
						<div class="rating-group d-flex justify-content-center align-items-center">
							<c:forEach var="i" begin="1" end="5">
								<img class="rating" data-toggle="popover" data-placement="top" title="leigo" data-content="some info here" src="${pageContext.request.contextPath}/img/util/star0.png" width="16" height="16">
							</c:forEach>
						</div>
					</div>
				</div>
				<div class="col-md-5 card bg-light text-dark m-2">
					<img class="mx-auto my-3" height="64" width="64" src="${pageContext.request.contextPath}/img/icons/java.png">
					<div class="card-body">
						<h4 class="text-center card-title">Java</h4>
						<p class="text-center card-text">
						Robusta, fortemente tipada, extremamente parâmetrizada, metódica,
						e tem como 'aliada' uma 'sopa de letrinhas' que pode te assustar: 
						Servlet, JSP, JSTL, JSF, entre outras. Também é executada do lado
						do servidor, e é, como php, uma peça importante para trazer dinamicidade
						aos sistemas web.
						</p>
						<div class="rating-group d-flex justify-content-center align-items-center">
							<c:forEach var="i" begin="1" end="5">
								<img class="rating" src="${pageContext.request.contextPath}/img/util/star0.png" width="16" height="16">
							</c:forEach>
						</div>
					</div>
				</div>
				<div class="w-100"></div>
				<div class="col-md-12 text-center my-5 bg-title bg-common bg-pos-top">
					<span class="font-4 font-oswald text-warning bg-fix">Frameworks</span>
				</div>
			</div>
			<div class="row my-5 justify-content-center pb-5 bg-dark">
				<div class="col-md-12 text-center my-5">
					<span class="font-4 font-anton text-white m-2">Interesses</span>
				</div>
				<div class="w-100"></div>
				<div class="col-md-5 m-2 bg-dev bg-common d-flex align-items-center justify-content-center">
					<h2 class="font-anton text-white">Desenvolvimento</h2>
				</div>
				<div class="col-md-6 m-2 bg-light rounded p-3">
				<p>Desde o primeiro contato com a disciplina de algoritmos, no curso 
				técnico em informática promovido pela Escola Estadual Jaíme Veríssimo de Campos Junior (Jaiminho) --
				em Várzea Grande --, sendo C a linguagem escolhida para trabalhar, senti que ali estava minha 'paixão'.</p>
				<p>Percebi logo cedo o potencial dessa especialização dentro dos sitemas de informação: Programação de sistemas
				distribuidos, embarcados, bancos de dados, web, etc. Tudo envolve, implicitamente, um algoritmo.</p>
				<p>É realizadora a sensação de se programar uma máquina, não importando a complexidade do algoritmo:
				Receba, processe, devolva. Nunca é mais que isso.</p>
				</div>
				<div class="w-100"></div>
				<div class="col-md-6 m-2 text-white bg-dark p-3 rounded order-md-6 order-sm-7">
					<p>Sempre tive uma certa obsessão pela sincronização, pela coneão entre tudo, todos e todas as coisas.
					É extremamente fascinante como através de um cabo, do 'ar' (Ahhh, o ar), em questão de millisegundos você
					se comunica do Japão, com sua mãe no Brasil; você, do serviço, a 20km  de casa, liga seu aquecedor, para que
					o clima fique agrádavel na sua chegada; você paga suas contas com alguns 'cliques', evitando assim as desgastantes
					filas dos bancos...</p>
					<p>Essa é conexão pela qual me fascino. Essa é a Rede!</p></div>
				<div class="col-md-5 m-2 bg-net bg-common d-flex align-items-center justify-content-center order-md-7">
					<h2 class="text-white font-anton" >Redes</h2>
				</div>
			</div>
			<div class="row bib my-5 justify-content-center flex-column flex-nowrap">
				<div class="col-md-12 text-center my-5">
					<span class="font-anton font-4">Com quem aprendi ou onde aprenderei?</span>
				</div>
				<div class="book-wrapper">
					<div class="w-100">
						<button class="mx-2 c bg-warning icon prev control-prev" data-slide="-1"></button>
						<button class="mx-2 c bg-warning icon next control-next" data-slide="+1"></button>
						<ul class="book-list d-flex">
							<c:forEach var="i" begin="1" end="10">
								<li class="bg-light border-primary d-inline-block rounded book-item">
									<div class="book-item-wrapper p-3">
										<img class=" mr-4 book-img" width="130" height="auto" src="${pageContext.request.contextPath}/img/demo/php.jpg">
										<div class="book-data">
											<span class="text-dark my-1 d-block book-title">Php e Mysql</span>
											<span class="my-2 text-warning book-author d-block">Evaldo Bento</span>
											<c:forEach var="i" begin="1" end="5">
												<img class="rating" data-toggle="popover" data-placement="top" title="leigo" data-content="some info here" src="${pageContext.request.contextPath}/img/util/star0.png" width="16" height="16">
											</c:forEach>
											<p class="book-op my-2 text-dark">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque vitae rhoncus odio. 
											Integer id erat a eros porttitor tincidunt. </p>
										</div>
									</div>
								</li>
							</c:forEach>
						</ul>
					</div>
				</div>
			</div>
		</div>
		<div class="footer">
		
		</div>
	</div>
	<script src="${pageContext.request.contextPath}/js/books_carousel.js"></script>
	<script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
	<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js" integrity="sha384-ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49" crossorigin="anonymous"></script>
	<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js" integrity="sha384-ChfqqxuZUCnJSK3+MXmPNIyE6ZbWh2IMqE241rYiqJxyMiZ6OW/JmZQ5stwEULTy" crossorigin="anonymous"></script>
	
</body>
</html>
