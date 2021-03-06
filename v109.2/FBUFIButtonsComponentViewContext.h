/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedToolbox, NSArray;

@interface FBUFIButtonsComponentViewContext : NSObject {

	FBUFIButtonsComponentViewContextOptions _options;
	unsigned long long _theme;
	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	CKTypedComponentAction<> _commentAction;
	CKTypedComponentAction<> _shareAction;
	CKTypedComponentAction<> _fallbackAction;
	CKTypedComponentAction<> _reactionDockPresentedAction;
	CKTypedComponentAction<> _reactionDockDismissedAction;

}

@property (nonatomic,readonly) unsigned long long theme;                                          //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                           //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                      //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> commentAction;                            //@synthesize commentAction=_commentAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> shareAction;                              //@synthesize shareAction=_shareAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> fallbackAction;                           //@synthesize fallbackAction=_fallbackAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionDockPresentedAction;              //@synthesize reactionDockPresentedAction=_reactionDockPresentedAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionDockDismissedAction;              //@synthesize reactionDockDismissedAction=_reactionDockDismissedAction - In the implementation block
@property (nonatomic,readonly) FBUFIButtonsComponentViewContextOptions options;                   //@synthesize options=_options - In the implementation block
-(FBFeedToolbox *)toolbox;
-(CKTypedComponentAction<>)commentAction;
-(CKTypedComponentAction<>)shareAction;
-(id)initWithTheme:(unsigned long long)arg1 toolbox:(id)arg2 trackingCodes:(id)arg3 commentAction:(CKTypedComponentAction<>)arg4 shareAction:(CKTypedComponentAction<>)arg5 fallbackAction:(CKTypedComponentAction<>)arg6 reactionDockPresentedAction:(CKTypedComponentAction<>)arg7 reactionDockDismissedAction:(CKTypedComponentAction<>)arg8 options:(FBUFIButtonsComponentViewContextOptions)arg9 ;
-(CKTypedComponentAction<>)fallbackAction;
-(CKTypedComponentAction<>)reactionDockPresentedAction;
-(CKTypedComponentAction<>)reactionDockDismissedAction;
-(NSArray *)trackingCodes;
-(FBUFIButtonsComponentViewContextOptions)options;
-(unsigned long long)theme;
@end

