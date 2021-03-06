/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedToolbox;

@interface FBInspirationMediaOverlayHeaderComponentViewContext : NSObject {

	FBFeedToolbox* _toolbox;
	CKTypedComponentAction<> _moreAction;
	CKTypedComponentAction<> _doneAction;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                          //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> moreAction;              //@synthesize moreAction=_moreAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> doneAction;              //@synthesize doneAction=_doneAction - In the implementation block
-(FBFeedToolbox *)toolbox;
-(CKTypedComponentAction<>)moreAction;
-(id)initWithToolbox:(id)arg1 moreAction:(CKTypedComponentAction<>)arg2 doneAction:(CKTypedComponentAction<>)arg3 ;
-(CKTypedComponentAction<>)doneAction;
@end

