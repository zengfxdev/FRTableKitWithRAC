//
//  FRModel.m
//  FRTableKitWithRAC
//
//  Created by 曾凡旭 on 2017/6/1.
//  Copyright © 2017年 zengfxios. All rights reserved.
//

#import "FRModel.h"

@implementation FRModel

#pragma mark - FRModelProtocol

+ (instancetype)modelWithJSON:(id)json {
    return [super yy_modelWithJSON:json];
}

+ (instancetype)modelWithDictionary:(NSDictionary *)dictionary {
    return [super yy_modelWithDictionary:dictionary];
}

- (id)modelToJSONObject {
    return [super yy_modelToJSONObject];
}

- (NSData *)modelToJSONData {
    return [super yy_modelToJSONData];
}

- (NSString *)modelToJSONString {
    return [super yy_modelToJSONString];
}

- (BOOL)modelSetWithJSON:(id)json {
    return [super yy_modelSetWithJSON:json];
}

- (BOOL)modelSetWithDictionary:(NSDictionary *)dictionary {
    return [super yy_modelSetWithDictionary:dictionary];
}

#pragma mark - NSCoding, NSCopying

- (void)encodeWithCoder:(NSCoder *)aCoder {
    [self yy_modelEncodeWithCoder:aCoder];
}

- (id)initWithCoder:(NSCoder *)aDecoder {
    self = [super init];
    return [self yy_modelInitWithCoder:aDecoder];
}

- (id)copyWithZone:(NSZone *)zone {
    return [self yy_modelCopy];
}

- (NSUInteger)hash {
    return [self yy_modelHash];
}

- (BOOL)isEqual:(id)object {
    return [self yy_modelIsEqual:object];
}

@end
