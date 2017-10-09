//
//  ViewController.swift
//  OfflineSDKLib
//
//  Created by manjunath.ramesh@onepointglobal.com on 09/25/2017.
//  Copyright (c) 2017 manjunath.ramesh@onepointglobal.com. All rights reserved.
//

import UIKit

class ViewController: OPGViewController, OPGSurveyDelegate {

    var scriptPath:String?

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        let sdk = OPGSDK()
        do {
            let auth = try sdk.authenticate("username", password: "password")
        }
        catch{
            print("Authentication Failed")         /* @"Error Occured. Contact Support!" */
            
        }
        self.downloadScript()
        // load offline survey
        self.loadOfflineSurvey(self.scriptPath, surveyName: "OfflineMediaTest", surveyID: NSNumber(value:102183), panelID: NSNumber(value:10635), panellistID: NSNumber(value:26114))

    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }



    func didSurveyStartLoad() {
        print("Survey Start Load")
    }
    
    func didSurveyFinishLoad() {
        print("Survey Finish Load")
    }
    
    func didSurveyCompleted() {
        self.navigationController?.popViewController(animated: true)
    }


    func downloadScript() {
        let sdk = OPGSDK()
        let survey = OPGSurvey()
        survey.surveyID = NSNumber(value:102183)
        survey.surveyName = "OfflineMediaTest"
        survey.surveyReference = "OfflineMediaTest"

        do {
        let script = try sdk.getScript(survey)
        self.scriptPath = script.scriptFilePath
        }
        catch{
            print("script download Failed")         /* @"Error Occured. Contact Support!" */
            
        }
    }
}

