/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCoding;
@class NSDate, NSObject;

@interface _FBGraphQLMemResponseCacheEntry : NSObject {

	NSDate* _date;
	NSObject*<NSCoding> _attachment;
	id _response;

}

@property (nonatomic,copy,readonly) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCoding> attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) id response;                                      //@synthesize response=_response - In the implementation block
-(id)initWithDate:(id)arg1 attachment:(id)arg2 response:(id)arg3 ;
-(NSDate *)date;
-(id)response;
-(NSObject*<NSCoding>)attachment;
@end

