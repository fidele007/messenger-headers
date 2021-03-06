/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/CKComponentProvider.h>
#import <Messenger/CKComponentSizeRangeProviding.h>
#import <Messenger/CKComponentHostingViewDelegate.h>

@class CKComponentHostingView, FBMemNegativeFeedbackMessageAction, FBRapidReportingToolbox, NSString;

@interface FBRapidReportingMessageViewController : UIViewController <CKComponentProvider, CKComponentSizeRangeProviding, CKComponentHostingViewDelegate> {

	CKComponentHostingView* _componentHost;
	FBMemNegativeFeedbackMessageAction* _messageAction;
	FBRapidReportingToolbox* _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithMessageAction:(id)arg1 toolbox:(id)arg2 ;
-(CKSizeRange)sizeRangeForBoundingSize:(CGSize)arg1 ;
-(void)loadView;
-(void)_updateLayout;
@end

