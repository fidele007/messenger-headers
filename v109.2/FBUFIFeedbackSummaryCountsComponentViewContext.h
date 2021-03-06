/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedToolbox, NSArray;

@interface FBUFIFeedbackSummaryCountsComponentViewContext : NSObject {

	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	unsigned long long _theme;
	CKTypedComponentAction<> _countsAction;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                       //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> countsAction;              //@synthesize countsAction=_countsAction - In the implementation block
@property (nonatomic,readonly) unsigned long long theme;                           //@synthesize theme=_theme - In the implementation block
-(FBFeedToolbox *)toolbox;
-(id)initWithToolbox:(id)arg1 theme:(unsigned long long)arg2 trackingCodes:(id)arg3 countsAction:(CKTypedComponentAction<>)arg4 ;
-(CKTypedComponentAction<>)countsAction;
-(NSArray *)trackingCodes;
-(unsigned long long)theme;
@end

