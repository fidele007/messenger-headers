/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPresentableDialog.h>

@protocol MNContactImportDialogDismissalListener;
@class MNImportedContactCardHostView, NSString;

@interface MNContactImportDialogViewController : UIViewController <MNPresentableDialog> {

	id<MNContactImportDialogDismissalListener> _dismissalListener;

}

@property (assign,nonatomic,__weak) id<MNContactImportDialogDismissalListener> dismissalListener;              //@synthesize dismissalListener=_dismissalListener - In the implementation block
@property (nonatomic,retain) MNImportedContactCardHostView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)willOpenKeyboardOnAppear;
-(void)displayView:(id)arg1 ;
-(id)initWithDismissalListener:(id)arg1 ;
-(id<MNContactImportDialogDismissalListener>)dismissalListener;
-(void)setDismissalListener:(id<MNContactImportDialogDismissalListener>)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismiss;
@end

