/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBAttachmentGreetingCardData : FBGraphQLInput {

	NSString* _templateId;
	NSString* _theme;
	NSArray* _slides;

}

@property (nonatomic,copy) NSString * templateId;              //@synthesize templateId=_templateId - In the implementation block
@property (nonatomic,copy) NSString * theme;                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,copy) NSArray * slides;                   //@synthesize slides=_slides - In the implementation block
-(NSArray *)slides;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)templateId;
-(void)setTemplateId:(NSString *)arg1 ;
-(void)setSlides:(NSArray *)arg1 ;
-(NSString *)theme;
-(void)setTheme:(NSString *)arg1 ;
@end

