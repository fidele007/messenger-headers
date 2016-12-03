/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLDownloadRequest.h>

@class NSArray, NSString;

@interface FBGraphQLPagedDownloadRequest : FBGraphQLDownloadRequest {

	NSArray* _cursorList;
	NSString* _beforeCursor;
	NSString* _afterCursor;
	unsigned long long _first;
	unsigned long long _last;

}

@property (nonatomic,copy) NSArray * cursorList;                    //@synthesize cursorList=_cursorList - In the implementation block
@property (nonatomic,copy) NSString * beforeCursor;                 //@synthesize beforeCursor=_beforeCursor - In the implementation block
@property (nonatomic,copy) NSString * afterCursor;                  //@synthesize afterCursor=_afterCursor - In the implementation block
@property (assign,nonatomic) unsigned long long first;              //@synthesize first=_first - In the implementation block
@property (assign,nonatomic) unsigned long long last;               //@synthesize last=_last - In the implementation block
-(id)networkRequest;
-(id)newQuery;
-(NSString *)afterCursor;
-(NSString *)beforeCursor;
-(id)newQueryWithCursor:(id)arg1 ;
-(void)setBeforeCursor:(NSString *)arg1 ;
-(void)setAfterCursor:(NSString *)arg1 ;
-(unsigned long long)totalNumberOfExpectedChunks;
-(NSArray *)cursorList;
-(id)targetIDForBatchRequestRelativeAfterCursor;
-(void)setCursorList:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)cursor;
-(unsigned long long)first;
-(void)setFirst:(unsigned long long)arg1 ;
-(unsigned long long)last;
-(void)setLast:(unsigned long long)arg1 ;
@end
