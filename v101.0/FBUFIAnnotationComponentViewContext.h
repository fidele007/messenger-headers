/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedToolbox;

@interface FBUFIAnnotationComponentViewContext : NSObject {

	BOOL _showReactions;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) BOOL showReactions;                   //@synthesize showReactions=_showReactions - In the implementation block
-(FBFeedToolbox *)toolbox;
-(id)initWithToolbox:(id)arg1 showReactions:(BOOL)arg2 ;
-(BOOL)showReactions;
@end
