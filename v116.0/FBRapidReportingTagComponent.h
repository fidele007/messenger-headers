/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKComponent.h>

@class CKComponent, FBMemNegativeFeedbackTag;

@interface FBRapidReportingTagComponent : CKComponent {

	CKComponent* _labelComponent;
	BOOL _selected;
	FBMemNegativeFeedbackTag* _tag;
	CKTypedComponentAction<> _action;

}

@property (nonatomic,readonly) CKTypedComponentAction<> action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) FBMemNegativeFeedbackTag * tag;               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
+(id)newWithTag:(id)arg1 selectionAction:(CKTypedComponentAction<>)arg2 uiProvider:(id)arg3 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(CKTypedComponentAction<>)action;
-(FBMemNegativeFeedbackTag *)tag;
-(BOOL)selected;
@end

