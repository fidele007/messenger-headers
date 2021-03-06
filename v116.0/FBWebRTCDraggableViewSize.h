/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBWebRTCDraggableViewSize : NSObject <NSCopying> {

	unsigned long long _type;
	CGSize _maxSize;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                       //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) BOOL isFullSize; 
+(id)draggableViewSizeWithType:(unsigned long long)arg1 maxSize:(CGSize)arg2 ;
+(id)draggableViewSizeWithType:(unsigned long long)arg1 ;
-(BOOL)isFullSize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)maxSize;
-(void)setMaxSize:(CGSize)arg1 ;
@end

