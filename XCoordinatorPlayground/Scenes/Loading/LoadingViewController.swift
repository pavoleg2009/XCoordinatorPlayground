//
//  LoadingViewController.swift
//  XCoordinatorPlayground
//
//  Created by Oleg Pavlichenkov on 10/05/2019.
//  Copyright © 2019 Oleg Pavlichenkov. All rights reserved.
//

import UIKit
import RxCocoa
import RxSwift
import Action

class LoadingViewController: UIViewController, BindableType {
    
    @IBOutlet weak var authButton: UIButton!
    @IBOutlet weak var mainButton: UIButton!
    
    var viewModel: LoadingViewModel!
    
    private var disposeBag = DisposeBag()
    
    override func viewDidLoad() {
        super.viewDidLoad()

        title = "Loading"
    }

    func bindViewModel() {
        
        authButton.rx.tap
            .bind(to: viewModel.authTrigger)
            .disposed(by: disposeBag)
        
        mainButton.rx.tap
            .bind(to: viewModel.mainTrigger)
            .disposed(by: disposeBag)
    }
}
