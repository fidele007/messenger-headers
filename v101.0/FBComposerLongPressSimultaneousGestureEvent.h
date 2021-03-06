/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerLongPressSimultaneousGestureEvent : NSObject <NSCopying> {

	unsigned long long _subtype;
	CGPoint _tapped_locationInViewWhenTapped;

}
+(id)actioned;
+(id)notTapped;
+(id)tappedWithLocationInViewWhenTapped:(CGPoint)arg1 ;
-(void)matchTapped:(/*^block*/id)arg1 notTapped:(/*^block*/id)arg2 actioned:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

