/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSData;

@interface FBOmnistoreCursor : NSObject {

	unique_ptr<facebook::omnistore::Cursor, std::__1::default_delete<facebook::omnistore::Cursor> >* _cursor;
	long long _status;

}

@property (copy,readonly) NSString * primaryKey; 
@property (copy,readonly) NSString * sortKey; 
@property (readonly) NSData * blob; 
@property (nonatomic,copy,readonly) NSString * blobAsJson; 
@property (readonly) long long status;                                  //@synthesize status=_status - In the implementation block
-(NSData *)blob;
-(NSString *)blobAsJson;
-(NSString *)primaryKey;
-(void)close;
-(long long)status;
-(BOOL)step;
-(NSString *)sortKey;
-(id)initWithCursor:(unique_ptr<facebook::omnistore::Cursor, std::__1::default_delete<facebook::omnistore::Cursor> >*)arg1 ;
@end
