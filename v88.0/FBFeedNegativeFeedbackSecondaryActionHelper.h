/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalWebFlowDelegate.h>

@protocol FBQueriedFeedUnitFieldsProtocol, FBQueriedActorFieldsProtocol;
@class FBFeedSecondaryActionContext, NSString, FBMemModelObject, FBNegativeFeedbackActionsManager, NSArray;

@interface FBFeedNegativeFeedbackSecondaryActionHelper : NSObject <FBModalWebFlowDelegate> {

	FBFeedSecondaryActionContext* _context;
	NSString* _hideableToken;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	FBNegativeFeedbackActionsManager* _negativeFeedbackActionsManager;
	NSArray* _trackingCodes;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _actor;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedActorFieldsProtocol> actor;              //@synthesize actor=_actor - In the implementation block
@property (nonatomic,readonly) FBFeedSecondaryActionContext * context;                             //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webViewControllerDidComplete:(id)arg1 ;
-(void)sendNegativeFeedbackAction:(id)arg1 ;
-(void)hideAll;
-(id)initWithHideableToken:(id)arg1 actor:(id)arg2 feedUnit:(id)arg3 trackingCodes:(id)arg4 context:(id)arg5 ;
-(id)_negativeFeedbackActionsManager;
-(void)_performBlockAfterNegativeFeedbackResponder:(/*^block*/id)arg1 ;
-(void)_hideUnit;
-(void)reportNegativeFeedbackAction:(id)arg1 ;
-(void)hideWithoutReportingNegativeFeedback;
-(void)unfollow;
-(void)hide;
-(FBFeedSecondaryActionContext *)context;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)actor;
@end

