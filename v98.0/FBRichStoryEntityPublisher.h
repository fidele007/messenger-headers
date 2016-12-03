/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityPublisherProtocol.h>

@protocol FBRichStoryEntityImageProtocol, FBRichStoryEntityActorProtocol;
@class UIColor, NSNumber, NSString;

@interface FBRichStoryEntityPublisher : NSObject <FBRichStoryEntityPublisherProtocol> {

	UIColor* _accentColor;
	UIColor* _barColor;
	NSNumber* _barHeight;
	UIColor* _backgroundColor;
	id<FBRichStoryEntityImageProtocol> _logo;
	id<FBRichStoryEntityActorProtocol> _page;

}

@property (nonatomic,retain) UIColor * accentColor;                                //@synthesize accentColor=_accentColor - In the implementation block
@property (nonatomic,retain) UIColor * barColor;                                   //@synthesize barColor=_barColor - In the implementation block
@property (nonatomic,copy) NSNumber * barHeight;                                   //@synthesize barHeight=_barHeight - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) id<FBRichStoryEntityImageProtocol> logo;              //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) id<FBRichStoryEntityActorProtocol> page;              //@synthesize page=_page - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)publisherWithAccentColor:(id)arg1 barColor:(id)arg2 barHeight:(id)arg3 backgroundColor:(id)arg4 logo:(id)arg5 page:(id)arg6 ;
-(UIColor *)accentColor;
-(id)initWithAccentColor:(id)arg1 barColor:(id)arg2 barHeight:(id)arg3 backgroundColor:(id)arg4 logo:(id)arg5 page:(id)arg6 ;
-(void)setAccentColor:(UIColor *)arg1 ;
-(void)setBarHeight:(NSNumber *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(NSNumber *)barHeight;
-(id<FBRichStoryEntityActorProtocol>)page;
-(void)setPage:(id<FBRichStoryEntityActorProtocol>)arg1 ;
-(id<FBRichStoryEntityImageProtocol>)logo;
-(void)setLogo:(id<FBRichStoryEntityImageProtocol>)arg1 ;
-(UIColor *)barColor;
-(void)setBarColor:(UIColor *)arg1 ;
@end

