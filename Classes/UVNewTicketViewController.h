//
//  UVNewTicketViewController.h
//  UserVoice
//
//  Created by UserVoice on 2/19/10.
//  Copyright 2010 UserVoice Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UVBaseViewController.h"
#import "UVTextEditor.h"

@class UVCustomField;

@interface UVNewTicketViewController : UVBaseViewController 
<UITableViewDataSource, UITableViewDelegate, 
	UITextFieldDelegate, UVTextEditorDelegate> {
		
	NSString *text;
	NSString *name;
	NSString *email;
	UVTextEditor *textEditor;
	UITextField *nameField;
	UITextField *emailField;
	UIBarButtonItem *prevBarButton;
	UVCustomField *subject;
	NSArray *customFields;
}

@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) UVTextEditor *textEditor;
@property (nonatomic, retain) UITextField *nameField;
@property (nonatomic, retain) UITextField *emailField;
@property (nonatomic, retain) UIBarButtonItem *prevBarButton;
@property (nonatomic, retain) UVCustomField *subject;
@property (nonatomic, retain) NSArray *customFields;

@end
