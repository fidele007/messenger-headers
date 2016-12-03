/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBNullstateSuggestion : FBGraphQLInput {

	NSString* _semantic;
	NSString* _textDisplayed;
	NSString* _tracking;
	NSString* _keywordSource;

}

@property (nonatomic,copy) NSString * semantic;                   //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,copy) NSString * textDisplayed;              //@synthesize textDisplayed=_textDisplayed - In the implementation block
@property (nonatomic,copy) NSString * tracking;                   //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) NSString * keywordSource;              //@synthesize keywordSource=_keywordSource - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)textDisplayed;
-(void)setTextDisplayed:(NSString *)arg1 ;
-(NSString *)keywordSource;
-(void)setKeywordSource:(NSString *)arg1 ;
-(void)setTracking:(NSString *)arg1 ;
-(NSString *)tracking;
-(NSString *)semantic;
-(void)setSemantic:(NSString *)arg1 ;
@end

