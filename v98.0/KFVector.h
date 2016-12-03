/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSDictionary;

@interface KFVector : NSObject <NSCopying, NSCoding> {

	NSString* _name;
	NSString* _formatVersion;
	long long _key;
	unsigned long long _frameRate;
	unsigned long long _animationFrameCount;
	NSArray* _features;
	NSArray* _animationGroups;
	NSDictionary* _bitmaps;
	CGSize _canvasSize;

}

@property (nonatomic,readonly) CGSize canvasSize;                                   //@synthesize canvasSize=_canvasSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatVersion;                       //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) long long key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long frameRate;                        //@synthesize frameRate=_frameRate - In the implementation block
@property (nonatomic,readonly) unsigned long long animationFrameCount;              //@synthesize animationFrameCount=_animationFrameCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * features;                             //@synthesize features=_features - In the implementation block
@property (nonatomic,copy,readonly) NSArray * animationGroups;                      //@synthesize animationGroups=_animationGroups - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * bitmaps;                         //@synthesize bitmaps=_bitmaps - In the implementation block
-(unsigned long long)animationFrameCount;
-(id)initWithCanvasSize:(CGSize)arg1 name:(id)arg2 formatVersion:(id)arg3 key:(long long)arg4 frameRate:(unsigned long long)arg5 animationFrameCount:(unsigned long long)arg6 features:(id)arg7 animationGroups:(id)arg8 bitmaps:(id)arg9 ;
-(NSArray *)animationGroups;
-(NSDictionary *)bitmaps;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(long long)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)features;
-(NSString *)formatVersion;
-(unsigned long long)frameRate;
-(CGSize)canvasSize;
@end

