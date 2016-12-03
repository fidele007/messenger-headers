/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBLinkedDictionaryEntry : NSObject {

	FBLinkedDictionaryEntry* _next;
	FBLinkedDictionaryEntry* _previous;
	id _data;
	id _key;

}

@property (assign,nonatomic,__weak) FBLinkedDictionaryEntry * next;                  //@synthesize next=_next - In the implementation block
@property (assign,nonatomic,__weak) FBLinkedDictionaryEntry * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,readonly) id data;                                              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) id key;                                               //@synthesize key=_key - In the implementation block
-(id)initWithData:(id)arg1 key:(id)arg2 ;
-(void)setPrevious:(FBLinkedDictionaryEntry *)arg1 ;
-(void)setNext:(FBLinkedDictionaryEntry *)arg1 ;
-(FBLinkedDictionaryEntry *)next;
-(FBLinkedDictionaryEntry *)previous;
-(id)key;
-(id)data;
@end
