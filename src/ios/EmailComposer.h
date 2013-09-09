//
//  EmailComposer.h
//
//  Version 1.1
//
//  Created by Guido Sabatini in 2012.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MFMailComposeViewController.h>
#import <Cordova/CDVPlugin.h>


@interface EmailComposer : CDVPlugin <MFMailComposeViewControllerDelegate> {
}


- (void) showEmailComposer:(CDVInvokedUrlCommand*)command;

@end