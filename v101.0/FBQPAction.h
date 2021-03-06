/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQPEntity.h>

@class NSString;

@interface FBQPAction : FBQPEntity {

	BOOL _dismissPromotion;
	NSString* _style;
	NSString* _title;
	NSString* _urlString;
	NSString* _httpMethod;
	long long _limit;

}

@property (nonatomic,copy) NSString * style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * urlString;                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                //@synthesize httpMethod=_httpMethod - In the implementation block
@property (assign,nonatomic) long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL dismissPromotion;              //@synthesize dismissPromotion=_dismissPromotion - In the implementation block
-(void)parseParameters:(id)arg1 ;
-(BOOL)dismissPromotion;
-(void)setDismissPromotion:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isValid;
-(NSString *)title;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
-(void)setHttpMethod:(NSString *)arg1 ;
-(NSString *)httpMethod;
-(void)setLimit:(long long)arg1 ;
-(long long)limit;
@end

