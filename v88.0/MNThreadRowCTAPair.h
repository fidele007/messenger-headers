/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNThreadRowCTA;

@interface MNThreadRowCTAPair : FBValueObject <NSCopying, NSCoding> {

	MNThreadRowCTA* _first;
	MNThreadRowCTA* _second;

}

@property (nonatomic,copy,readonly) MNThreadRowCTA * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,copy,readonly) MNThreadRowCTA * second;              //@synthesize second=_second - In the implementation block
-(MNThreadRowCTA *)second;
-(MNThreadRowCTA *)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

