/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, RCTValueAnimatedNode;

@interface RCTEventAnimation : NSObject {

	NSArray* _eventPath;
	RCTValueAnimatedNode* _valueNode;

}

@property (nonatomic,__weak,readonly) RCTValueAnimatedNode * valueNode;              //@synthesize valueNode=_valueNode - In the implementation block
-(id)initWithEventPath:(id)arg1 valueNode:(id)arg2 ;
-(RCTValueAnimatedNode *)valueNode;
-(void)updateWithEvent:(id)arg1 ;
@end

