/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, FBUserSession, NSString;

@interface FBNegativeFeedbackActionsManager : NSObject <UIAlertViewDelegate> {

	UIAlertView* _confirmationAlert;
	/*^block*/id _pendingExecuteBlock;
	FBUserSession* _session;
	unsigned long long _layoutIdiom;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)unitUsesCurationFlow:(id)arg1 inLayoutIdiom:(unsigned long long)arg2 session:(id)arg3 ;
+(BOOL)negativeFeedbackSecondaryActionIsHideAll:(id)arg1 ;
+(id)negativeFeedbackActionsLocationFromLayoutIdiom:(unsigned long long)arg1 ;
+(void)sendNegativeFeedbackAction:(id)arg1 hideableToken:(id)arg2 unit:(id)arg3 trackingCodes:(id)arg4 actionPath:(id)arg5 session:(id)arg6 layoutIdiom:(unsigned long long)arg7 failureBlock:(/*^block*/id)arg8 ;
+(void)sendNegativeFeedbackRequestForActionType:(id)arg1 hideableToken:(id)arg2 isUndo:(BOOL)arg3 trackingCodes:(id)arg4 graphQLID:(id)arg5 session:(id)arg6 location:(id)arg7 actionPath:(id)arg8 successBlock:(/*^block*/id)arg9 failureBlock:(/*^block*/id)arg10 ;
+(void)undoNegativeFeedbackAction:(id)arg1 hideableToken:(id)arg2 unit:(id)arg3 trackingCodes:(id)arg4 session:(id)arg5 layoutIdiom:(unsigned long long)arg6 actionPath:(id)arg7 successBlock:(/*^block*/id)arg8 failureBlock:(/*^block*/id)arg9 ;
-(void)userDidSelectAction:(id)arg1 hideableToken:(id)arg2 unit:(id)arg3 trackingCodes:(id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)initWithSession:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(void)_promptOrExecuteForAction:(id)arg1 unit:(id)arg2 withExecuteBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
