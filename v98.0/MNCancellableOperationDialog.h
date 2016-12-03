/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPresentableDialog.h>

@class MNCancellableOperationView, NSString;

@interface MNCancellableOperationDialog : UIViewController <MNPresentableDialog> {

	MNCancellableOperationView* _dialogView;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,retain) MNCancellableOperationView * dialogView;              //@synthesize dialogView=_dialogView - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                         //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)willOpenKeyboardOnAppear;
-(id)initWithCancelBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)cancelBlock;
-(MNCancellableOperationView *)dialogView;
-(void)setDialogView:(MNCancellableOperationView *)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
@end

