//
//  LoginViewController.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import UIKit
import RxSwift
import RxCocoa

class SignInViewController: UIViewController, BindableType {

    @IBOutlet weak var loginButton: UIButton!
    
    var viewModel: SignInViewModel!
    
    private let disposeBag = DisposeBag()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        title = "Sign In"
    }
    
    func bindViewModel() {
        loginButton.rx.tap
            .bind(to: viewModel.loginTrigger)
            .disposed(by: disposeBag)
    }

}
