//
//  LandingViewController.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import UIKit
import RxCocoa
import RxSwift
import Action

class LandingViewController: UIViewController, BindableType {
    
    
    @IBOutlet weak var signInButton: UIButton!
    @IBOutlet weak var signUpButton: UIButton!
    
    var viewModel: LandingViewModel!
    
    private var disposeBag = DisposeBag()
    
    override func viewDidLoad() {
        super.viewDidLoad()

        title = "Landing"
    }

    func bindViewModel() {
        
        signInButton.rx.tap
            .bind(to: viewModel.signInTrigger)
            .disposed(by: disposeBag)
        
        signUpButton.rx.tap
            .bind(to: viewModel.signUpTrigger)
            .disposed(by: disposeBag)
    }
}
