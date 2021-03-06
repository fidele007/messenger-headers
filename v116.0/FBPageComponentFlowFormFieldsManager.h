/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPageComponentFlowFormFieldUpdateListener.h>

@class NSMutableDictionary, FBPageComponentFlowFormFieldUpdateListenerAnnouncer, NSString;

@interface FBPageComponentFlowFormFieldsManager : NSObject <FBPageComponentFlowFormFieldUpdateListener> {

	NSMutableDictionary* _mutableFormFields;
	FBPageComponentFlowFormFieldUpdateListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnnouncer:(id)arg1 ;
-(id)formFields;
-(void)updateFormFieldsWithFormFieldType:(id)arg1 formFieldId:(id)arg2 fieldName:(id)arg3 value:(id)arg4 isValidValue:(BOOL)arg5 ;
-(id)mutableFormFields;
-(void)updateFormFieldsWithFormFieldObject:(id)arg1 ;
-(void)removeFormField:(id)arg1 ;
-(void)dealloc;
@end

