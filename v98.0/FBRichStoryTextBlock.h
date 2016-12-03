/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryBlock.h>

@class NSArray, NSString;

@interface FBRichStoryTextBlock : FBRichStoryBlock {

	NSArray* _attributedEntities;
	NSArray* _attributedInlineStyles;
	long long _type;
	long long _alignment;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * attributedEntities;                  //@synthesize attributedEntities=_attributedEntities - In the implementation block
@property (nonatomic,copy) NSArray * attributedInlineStyles;              //@synthesize attributedInlineStyles=_attributedInlineStyles - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long alignment;                       //@synthesize alignment=_alignment - In the implementation block
+(id)sponsoredBlockWithID:(id)arg1 ;
-(NSArray *)attributedEntities;
-(NSArray *)attributedInlineStyles;
-(id)initWithType:(long long)arg1 text:(id)arg2 alignment:(long long)arg3 attributedEntities:(id)arg4 attributedInlineStyles:(id)arg5 blockID:(id)arg6 annotations:(id)arg7 ;
-(id)copyWithType:(long long)arg1 ;
-(void)setAttributedEntities:(NSArray *)arg1 ;
-(void)setAttributedInlineStyles:(NSArray *)arg1 ;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)alignment;
@end

