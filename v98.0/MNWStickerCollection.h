/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray;

@interface MNWStickerCollection : FBValueObject <NSCopying, NSCoding> {

	NSArray* _stickerSets;

}

@property (nonatomic,copy,readonly) NSArray * stickerSets;              //@synthesize stickerSets=_stickerSets - In the implementation block
-(id)initWithStickerSets:(id)arg1 ;
-(NSArray *)stickerSets;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

