/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPageComponentFlowFormFieldUpdateListener.h>

@protocol FBPageComponentFlowScreenActionStateManagerDelegate;
@class NSMutableDictionary, FBPageComponentFlowFormFieldUpdateListenerAnnouncer, NSString;

@interface FBPageComponentFlowScreenActionStateManager : NSObject <FBPageComponentFlowFormFieldUpdateListener> {

	NSMutableDictionary* _invalidFormFields;
	FBPageComponentFlowFormFieldUpdateListenerAnnouncer* _announcer;
	BOOL _disabled;
	id<FBPageComponentFlowScreenActionStateManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPageComponentFlowScreenActionStateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateFormFieldsWithFormFieldType:(id)arg1 formFieldId:(id)arg2 fieldName:(id)arg3 value:(id)arg4 isValidValue:(BOOL)arg5 ;
-(id)initWithInitialState:(BOOL)arg1 announcer:(id)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<FBPageComponentFlowScreenActionStateManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPageComponentFlowScreenActionStateManagerDelegate>)delegate;
-(void)_updateCurrentState;
@end

